#include <stdio.h>


int* search(int *arr, int n, int key) {
    int *ptr = NULL; // Khởi tạo con trỏ và gán giá trị ban đầu là NULL

    for (int i = 0; i < n; i++) {
        if (*arr == key) { // Nếu phần tử hiện tại bằng với khóa tìm kiếm
            ptr = arr; // Gán con trỏ tới địa chỉ của phần tử trong mảng
            break; // Kết thúc vòng lặp
        }
        arr++; // Di chuyển con trỏ sang phần tử tiếp theo trong mảng
    }

    return ptr; // Trả về con trỏ trỏ tới phần tử nếu tìm thấy, ngược lại trả về NULL
}

int main() {
    int n, key;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhập phần tử cần tìm kiếm: ");
    scanf("%d", &key);

    // Gọi hàm tìm kiếm phần tử trong mảng sử dụng con trỏ
    int *result = search(arr, n, key);

    // Kiểm tra kết quả
    if (result != NULL) {
        printf("Phần tử %d được tìm thấy tại vị trí %ld trong mảng.\n", key, result - arr);
    } else {
        printf("Không tìm thấy phần tử %d trong mảng.\n", key);
    }

    return 0;
}
