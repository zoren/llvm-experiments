declare i32 @putchar(i32) nounwind

define i32 @main() {
start:
    br label %loop

loop:
    %curChar = phi i32 [97, %start], [%curChar1, %loop]
    tail call i32 @putchar(i32 %curChar)
    %curChar1 = add i32 %curChar, 1
    %atEnd = icmp eq i32 %curChar, 122
    br i1 %atEnd, label %end, label %loop

end:
    tail call i32 @putchar(i32 10)
    ret i32 0
}
