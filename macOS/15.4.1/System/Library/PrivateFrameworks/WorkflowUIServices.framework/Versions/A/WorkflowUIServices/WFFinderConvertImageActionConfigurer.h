@class NSArray, WFFinderConvertImageActionConfigurationViewController, NSString, WFFinderImageResizeDescriptor, NSWindow;

@interface WFFinderConvertImageActionConfigurer : NSObject <NSWindowDelegate>

@property (readonly, nonatomic) NSArray *images;
@property (nonatomic) unsigned long long currentFormat;
@property (retain, nonatomic) WFFinderImageResizeDescriptor *selectedDescriptor;
@property (retain, nonatomic) NSWindow *window;
@property (retain, nonatomic) WFFinderConvertImageActionConfigurationViewController *viewController;
@property (copy, nonatomic) id /* block */ descriptorSelectedBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismiss;
- (void)present;
- (void)windowWillClose:(id)a0;
- (id)initWithImages:(id)a0;
- (void)dismissWithSelectedDescriptor:(id)a0 error:(id)a1;
- (void)updateSizesForFormat:(unsigned long long)a0;

@end
