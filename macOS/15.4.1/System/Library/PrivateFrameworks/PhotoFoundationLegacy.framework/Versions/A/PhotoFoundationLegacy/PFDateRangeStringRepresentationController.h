@class NSString, NSCalendar, NSTimer, NSDate;
@protocol PFDateRangeStringRepresentationControllerDelegate;

@interface PFDateRangeStringRepresentationController : NSObject <PFDateRangeSystemChangeReceiver> {
    id<PFDateRangeStringRepresentationControllerDelegate> _delegate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimer *_expirationTimer;
    NSTimer *_updateTimer;
    NSString *_stringRepresentation;
    long long _autoUpdatingEnabledCount;
    long long _pendingConfigurationChangesRecursiveCount;
    unsigned char _listeningToTimeRelatedNotifications : 1;
    unsigned char _configurationChangesMade : 1;
}

@property (readonly, weak, nonatomic) id<PFDateRangeStringRepresentationControllerDelegate> delegate;
@property (readonly) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)performUpdate:(id)a0;
+ (void)updateStringRepresentationInController:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)endDate;
- (id)startDate;
- (void)setStartDate:(id)a0 endDate:(id)a1;
- (BOOL)isAutoUpdating;
- (void)_cancelExpirationTimer;
- (void)_disableAutoUpdating;
- (void)_enableAutoUpdating;
- (void)_handleFiredTimer:(id)a0;
- (void)_handleSystemDidChangeNotification:(id)a0;
- (void)_notifyDelegateDidUpdateStringRepresentation:(id)a0;
- (BOOL)_prepareForExpirationAfterTimeInterval:(double)a0;
- (void)_prepareForExpirationOnDate:(id)a0;
- (void)_requestStringRepresentationUpdate;
- (BOOL)_updateStartDate:(id)a0 endDate:(id)a1;
- (void)_updateStringRepresentation:(id)a0 startOfDisplayDateDay:(id)a1;
- (void)performConfigurationChangeUsingBlock:(id /* block */)a0;
- (void)startAutoUpdating;
- (void)stopAutoUpdating;
- (id)stringRepresentationForDisplayDate:(id)a0 startOfDisplayDateDay:(id)a1 expirationTimeInterval:(double *)a2;
- (id)stringRepresentationForRangeFromDate:(id)a0 toDate:(id)a1;

@end
