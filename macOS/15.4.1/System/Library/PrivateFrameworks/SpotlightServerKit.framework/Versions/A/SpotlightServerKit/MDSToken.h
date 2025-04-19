@interface MDSToken : NSObject {
    unsigned int _retainCount;
    unsigned int _tokenID;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned int)tokenID;

@end
