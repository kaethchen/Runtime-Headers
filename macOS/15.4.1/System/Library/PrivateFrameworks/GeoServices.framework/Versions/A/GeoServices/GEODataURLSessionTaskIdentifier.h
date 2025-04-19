@interface GEODataURLSessionTaskIdentifier : NSObject <NSCopying> {
    long long _sessionIdentity;
    unsigned long long _taskIdentifier;
    unsigned long long _hash;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSession:(id)a0 task:(id)a1;

@end
