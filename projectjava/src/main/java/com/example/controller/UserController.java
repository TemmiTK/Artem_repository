package com.example.controller;

import com.example.model.User;
import com.example.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;
import java.util.Map;

@RestController

public class UserController {

    @Autowired
    private UserService userService;

    @GetMapping("/getusers")
    public List<Map<String, Object>> getAllUsers() {
        return userService.getUsers();
    }



    @PostMapping
    public void createUser(@RequestBody User user) {
        userService.createUser("Artem", "Tkachenko", "atkachenko@gmail.com");
    }

    @DeleteMapping("/{id}")
    public void deleteUser(@PathVariable Long id) {
        userService.removeUser(id);
    }
}


