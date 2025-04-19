@interface MUISearchRequestID : NSObject {
    unsigned int _underlying;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToID:(id)a0;

@end
