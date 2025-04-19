@class WFServicesWorkflow;

@interface WFServicesIconDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) WFServicesWorkflow *servicesWorkflow;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithServicesWorkflow:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;

@end
