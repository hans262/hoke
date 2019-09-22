package main

import (
	"fmt"
	"io"
	"net/http"
)

func main() {
	http.HandleFunc("/", hello)
	http.HandleFunc("/api", api)
	err := http.ListenAndServe("0.0.0.0:5000", nil)
	if err != nil {
		fmt.Println("服务器创建失败")
	}
}

func hello(w http.ResponseWriter, req *http.Request) {
	w.Write([]byte("Hello wolrd"))
}
func api(w http.ResponseWriter, req *http.Request) {
	io.WriteString(w, "hello api")
}
