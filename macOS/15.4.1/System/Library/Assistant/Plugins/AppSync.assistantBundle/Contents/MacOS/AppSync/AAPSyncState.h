@class NSString, AAPSyncAnchor, NSSet, NSArray, AAPSyncPrimitiveAnchor;

@interface AAPSyncState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *validity;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) AAPSyncPrimitiveAnchor *keyAnchor;
@property (readonly, copy, nonatomic) AAPSyncAnchor *startAnchor;
@property (readonly, copy, nonatomic) AAPSyncAnchor *stopAnchor;
@property (readonly, copy, nonatomic) NSSet *apps;
@property (readonly, copy, nonatomic) NSArray *deletes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_validate;
- (id)initWithValidity:(id)a0 version:(long long)a1 keyAnchor:(id)a2 startAnchor:(id)a3 stopAnchor:(id)a4 apps:(id)a5 deletes:(id)a6;

@end
