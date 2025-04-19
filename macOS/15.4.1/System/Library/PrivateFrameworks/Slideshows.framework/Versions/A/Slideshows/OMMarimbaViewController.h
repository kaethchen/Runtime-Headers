@class MPDocument, MRMarimbaView;

@interface OMMarimbaViewController : OFNSViewController

@property (retain) MPDocument *document;
@property (readonly) MRMarimbaView *marimbaView;
@property BOOL stretchableWithoutReauthoring;

+ (void)initialize;

- (void)dealloc;
- (id)init;

@end
