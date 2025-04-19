@class NSHMDMetalSession, NSString, NSHMDIOSurfaceDrawable;
@protocol MTLTexture;

@interface NSHMDMetalSessionDrawable : NSObject <NSHMDMetalSessionDrawable, MTLDrawableSPI> {
    NSHMDMetalSession *_session;
    NSHMDIOSurfaceDrawable *_drawable;
    id /* block */ _presentScheduledHandler;
    id /* block */ _presentedHandler;
}

@property (readonly) NSHMDMetalSession *session;
@property (readonly) id<MTLTexture> texture;
@property double inputTimeStamp;
@property unsigned long long debugSignpost;
@property (readonly, nonatomic) double presentedTime;
@property (readonly, nonatomic) unsigned long long drawableID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long status;

- (void)dealloc;
- (void)present;
- (void)addPresentScheduledHandler:(id /* block */)a0;
- (void)addPresentedHandler:(id /* block */)a0;
- (id)initWithSession:(id)a0 surfaceDrawable:(id)a1;
- (void)presentAfterMinimumDuration:(double)a0;
- (void)presentAtTime:(double)a0;
- (void)presentAtTimestamp:(double)a0;

@end
