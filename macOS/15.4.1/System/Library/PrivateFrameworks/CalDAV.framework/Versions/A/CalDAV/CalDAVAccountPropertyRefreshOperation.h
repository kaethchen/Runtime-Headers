@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void).cxx_destruct;
- (id)_copyHomePropertiesPropFindElements;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)a0;
- (void)_reallyRefreshProperties;
- (void)_refreshDefaultAlarms;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (id)initWithPrincipal:(id)a0;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void)refreshProperties;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (BOOL)shouldKeepDefaultAlarmError:(id)a0;
- (BOOL)shouldRefreshDefaultAlarms;

@end
