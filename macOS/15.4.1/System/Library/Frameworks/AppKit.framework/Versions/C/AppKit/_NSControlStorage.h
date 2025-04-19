@class NSFont;

@interface _NSControlStorage : NSObject {
    struct { unsigned char usesSingleLineMode : 1; unsigned char inSendAction : 1; unsigned char refusesFirstResponder : 1; unsigned char highlighted : 1; unsigned char continuous : 1; } _flags;
    unsigned long long __configuredSendActionMask;
    NSFont *__font;
    id __representedObject;
    unsigned long long __controlSize;
    unsigned long long __lineBreakMode;
    long long __baseWritingDirection;
    long long __textAlignment;
}

- (void)dealloc;

@end
