@interface MDSInternalToken : NSObject {
    struct { unsigned long long tokenId; } _tokenID;
}

+ (void)initialize;
+ (id)tokenDictionary;
+ (id)copyTokenWithTokenID:(struct { unsigned long long x0; })a0;
+ (unsigned long long)newTokenID;
+ (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *)tokenMutex;

- (id)init;
- (struct { unsigned long long x0; })tokenID;
- (void)registerToken;

@end
