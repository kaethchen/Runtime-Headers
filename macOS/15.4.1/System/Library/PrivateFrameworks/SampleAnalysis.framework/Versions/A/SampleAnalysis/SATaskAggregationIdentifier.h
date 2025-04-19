@class SASharedCache, SABinary;

@interface SATaskAggregationIdentifier : NSObject <NSCopying> {
    SABinary *_binary;
    SASharedCache *_sharedCache;
    unsigned long long _rcid;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
