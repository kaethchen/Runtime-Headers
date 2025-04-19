@interface MAUSBRouteString : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly) unsigned char tier1Hub;
@property (readonly) unsigned char tier2Hub;
@property (readonly) unsigned char tier3Hub;
@property (readonly) unsigned char tier4Hub;
@property (readonly) unsigned char tier5Hub;
@property (readonly) unsigned int routeString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocationID:(unsigned int)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithRouteString:(unsigned int)a0;
- (id)initWithTier1Hub:(unsigned char)a0 tier2Hub:(unsigned char)a1 tier3Hub:(unsigned char)a2 tier4Hub:(unsigned char)a3 tier5Hub:(unsigned char)a4;

@end
