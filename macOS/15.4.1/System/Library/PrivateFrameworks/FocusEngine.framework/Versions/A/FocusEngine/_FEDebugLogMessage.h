@class NSString;

@interface _FEDebugLogMessage : NSObject {
    NSString *_string;
}

+ (id)messageWithFormat:(id)a0;
+ (id)messageWithNewline;
+ (id)messageWithString:(id)a0;
+ (id)messageWithStyle:(unsigned long long)a0 string:(id)a1;
+ (id)messageWithPrefix:(id)a0 string:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)_stringRepresentation;
- (BOOL)_isNode;
- (BOOL)_isTransparent;

@end
