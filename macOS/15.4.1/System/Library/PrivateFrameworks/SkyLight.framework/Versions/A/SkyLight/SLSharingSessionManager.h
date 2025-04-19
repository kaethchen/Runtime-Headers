@class NSMapTable;
@protocol SLSharingSessionManagerSystemDelegate, SLSharingSessionManagerDelegate;

@interface SLSharingSessionManager : NSObject

@property (nonatomic) id<SLSharingSessionManagerSystemDelegate> systemDelegate;
@property (nonatomic) id<SLSharingSessionManagerSystemDelegate> systemDelegate;
@property (copy, nonatomic) id /* block */ delegateBlock;
@property (retain, nonatomic) NSMapTable *clientContexts;
@property (nonatomic) id<SLSharingSessionManagerDelegate> delegate;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (id)copyAllSessions;
- (id)beginNoPillSharingSessionWithTitle:(id)a0;
- (id)beginSharingSessionWithTitle:(id)a0;
- (id)beginSharingSessionWithTitle:(id)a0 suppressWindowSharingIndicator:(BOOL)a1 suppressMenuBarSharingIndicatorNotifications:(BOOL)a2;
- (id)contextForPayload:(id)a0;
- (void)dispatchToClientDelegate:(id)a0;
- (void)endSharingSession:(id)a0;
- (id)initPrivate;
- (id)notificationDictionary;
- (void)pickerCanceledSession:(id)a0;
- (void)registerNotification;
- (void)unregisterNotification;

@end
