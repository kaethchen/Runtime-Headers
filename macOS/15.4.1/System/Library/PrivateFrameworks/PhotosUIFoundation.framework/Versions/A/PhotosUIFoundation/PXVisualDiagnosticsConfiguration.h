@class NSString;
@protocol PXVisualDiagnosticsProvider;

@interface PXVisualDiagnosticsConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) id<PXVisualDiagnosticsProvider> rootProvider;
@property (nonatomic) struct CGSize { double width; double height; } defaultPageSize;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isPrivateDataAllowed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRootProvider:(id)a0;

@end
