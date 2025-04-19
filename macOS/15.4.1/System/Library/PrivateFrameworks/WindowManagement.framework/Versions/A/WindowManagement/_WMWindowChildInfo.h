@class _WMWindow;

@interface _WMWindowChildInfo : NSObject

@property (retain) _WMWindow *childWindow;
@property unsigned long long positionAboutParent;

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0 positionedAboutParent:(unsigned long long)a1;

@end
