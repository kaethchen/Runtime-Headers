@class NSView, NSString;

@interface _NSPortalView1 : NSView <NSPortalViewImplementation> {
    NSView *_sourceView;
}

@property (retain) NSView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
