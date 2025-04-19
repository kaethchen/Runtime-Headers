@class NSString;

@interface CAConstraintLayoutManager : NSObject <NSSecureCoding, CALayoutManager>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layoutManager;
+ (void)CAMLParserStartElement:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)invalidateLayoutOfLayer:(id)a0;
- (struct CGSize { double x0; double x1; })preferredSizeOfLayer:(id)a0;

@end
