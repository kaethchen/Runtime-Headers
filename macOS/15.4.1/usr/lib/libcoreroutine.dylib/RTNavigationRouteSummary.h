@class RTMapItem;

@interface RTNavigationRouteSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTMapItem *originMapItem;
@property (retain, nonatomic) RTMapItem *destinationMapItem;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginMapItem:(id)a0 destinationMapItem:(id)a1;

@end
