@class NSPredicate;

@interface AMSmartGroup : AMGroup {
    unsigned long long _itemLimit;
}

@property (copy, nonatomic) NSPredicate *predicate;
@property BOOL hasItemLimit;
@property (nonatomic) unsigned long long itemLimit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (id)assets;

@end
