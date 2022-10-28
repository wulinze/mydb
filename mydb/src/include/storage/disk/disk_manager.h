#pragma once

#include <cstring>
#include <cassert>
#include <fstream>
#include <thread>
#include <mutex>
#include <memory>

namespace mydb::storage{
    class DiskManager{
        public:
            DiskManager();
            ~DiskManager();
        
            bool ReadPage(std::shared_ptr<char> buf, page_id_t page_id);
            bool WritePage();
        private:
            std::string file_name_;
            std::fstream db_io_;
    };
}