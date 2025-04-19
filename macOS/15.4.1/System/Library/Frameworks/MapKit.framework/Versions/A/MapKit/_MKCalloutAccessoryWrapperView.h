@class NSString, NSView;
@protocol _MKCalloutAccessoryView;

@interface _MKCalloutAccessoryWrapperView : NSView <_MKCalloutAccessoryView> {
    NSView<_MKCalloutAccessoryView> *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (double)_mapkit_minimumCalloutWidthMultiplier;

@end
