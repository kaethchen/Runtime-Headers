@class NSArray;

@interface ICAudioTextAttachment : ICBrickTextAttachment

@property (nonatomic, readonly) NSArray *supportedPresentationSizes;

- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (id)initWithAttachment:(id)a0;

@end
