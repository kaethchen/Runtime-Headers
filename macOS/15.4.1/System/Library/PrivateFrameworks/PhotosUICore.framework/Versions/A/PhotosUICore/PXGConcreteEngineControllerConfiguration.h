@class NSString, PXGViewEnvironment, PXMediaProvider, NSColor;

@interface PXGConcreteEngineControllerConfiguration : NSObject <PXGHostingControllerConfiguration, NSCopying>

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (copy, nonatomic) id /* block */ rootLayoutPromise;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (copy, nonatomic) PXGViewEnvironment *viewEnvironment;
@property (nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (nonatomic) double displayScale;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL deferReferenceSizeChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_incrementVersion;
- (id)initWithViewEnvironment:(id)a0;

@end
