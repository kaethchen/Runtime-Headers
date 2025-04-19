@class IKImageWrapper;

@interface IKCacheDatabaseUIDInfo : NSObject {
    IKImageWrapper *_image;
    unsigned long long _version;
    unsigned long long _index;
    BOOL _invalid;
}

- (void)dealloc;
- (BOOL)isValid;
- (unsigned long long)version;
- (void)setImage:(id)a0;
- (id)image;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)a0;
- (void)setVersion:(unsigned long long)a0;
- (void)setIsValid:(BOOL)a0;

@end
