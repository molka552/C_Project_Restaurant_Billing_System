cmake_minimum_required(VERSION 3.28)
project(Project_C_Systeme_Facturation_Restaurant C)

set(CMAKE_C_STANDARD 11)

add_executable(Project_C_Systeme_Facturation_Restaurant main.c
        restaurant.h
        invoice.c
        show_invoices.c
        search_invoice.c
        billing_functions.c)
