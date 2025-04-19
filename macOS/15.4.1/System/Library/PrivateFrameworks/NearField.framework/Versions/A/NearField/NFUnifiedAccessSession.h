@class NFApplet, NSSet, NSDictionary;
@protocol NFUnifiedAccessSessionDelegate;

@interface NFUnifiedAccessSession : NFSession {
    id<NFUnifiedAccessSessionDelegate> _delegate;
    BOOL _emulationActive;
    NSDictionary *_appletsById;
    unsigned long long _numActiveSEs;
    BOOL _fieldNotificationSent;
}

@property (nonatomic) BOOL cardEmulationStarted;
@property id<NFUnifiedAccessSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, retain) NSSet *activeKeys;

- (void).cxx_destruct;
- (void)endSession;
- (id)allApplets;
- (id)appletWithIdentifier:(id)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)setActivePaymentApplet:(id)a0 keys:(id)a1 error:(id *)a2;
- (BOOL)stopCardEmulation:(id *)a0;
- (void)_createSesdSession;
- (BOOL)_startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)_startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (id)appletsWithIdentifiers:(id)a0 secondaryIdentifier:(id)a1;
- (void)didEndUnexpectedly;
- (void)didStartSession:(id)a0;
- (BOOL)isACWG;
- (BOOL)isUnifiedAccessOrAcwg:(id)a0 secondaryIdentifier:(id)a1;
- (unsigned long long)numberOfActiveSecureElements;
- (void)releaseSesdSession;
- (BOOL)setActivePaymentApplets:(id)a0 error:(id *)a1;
- (BOOL)startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)startExpressMode:(id *)a0;
- (BOOL)validateAidsAndKeys:(id)a0;

@end
