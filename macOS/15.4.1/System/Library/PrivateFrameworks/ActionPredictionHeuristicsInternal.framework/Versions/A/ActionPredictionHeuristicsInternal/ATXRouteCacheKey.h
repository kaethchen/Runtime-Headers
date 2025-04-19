@class NSString;

@interface ATXRouteCacheKey : NSObject <NSCopying> {
    NSString *destinationLocation;
    NSString *transportType;
    BOOL localOnlyAfterFirstUpdate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
