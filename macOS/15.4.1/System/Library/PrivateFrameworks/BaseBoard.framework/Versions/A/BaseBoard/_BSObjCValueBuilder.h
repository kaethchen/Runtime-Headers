@class NSString;

@interface _BSObjCValueBuilder : NSObject <BSObjCValueBuilding> {
    NSString *_encoding;
}

- (void).cxx_destruct;
- (void)setType:(char)a0;
- (void)setCEncoding:(const char *)a0;
- (void)setEncoding:(id)a0;
- (void)setObjectType:(Class)a0;
- (void)setValueType:(id)a0;

@end
