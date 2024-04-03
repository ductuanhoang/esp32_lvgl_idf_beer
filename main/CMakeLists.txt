

set(pri_req 
    cmd_nvs
    driver
)


idf_component_register(SRCS "main.c"
                        INCLUDE_DIRS "."
                        REQUIRES ${pri_req})
