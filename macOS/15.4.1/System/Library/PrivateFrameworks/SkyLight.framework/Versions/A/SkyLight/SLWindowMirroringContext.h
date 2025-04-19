@class NSNumber, NSString, SLSharingSession;

@interface SLWindowMirroringContext : NSObject {
    NSString *_sharingSessionTitle;
    SLSharingSession *_session;
}

@property (readonly) NSNumber *displayID;
@property (readonly) NSNumber *srcDisplayID;
@property (retain) NSNumber *shieldWindowID;

- (void)dealloc;
- (id)filter;
- (void)currentSession;
- (BOOL)mirrorTo:(id)a0 withFilter:(id)a1 showCursor:(BOOL)a2;
- (id)currentShieldWindowID;
- (BOOL)extend;
- (id)initWithDisplay:(id)a0;
- (BOOL)mirrorTo:(id)a0;
- (void)resetSession;
- (void)setupSession;

@end
