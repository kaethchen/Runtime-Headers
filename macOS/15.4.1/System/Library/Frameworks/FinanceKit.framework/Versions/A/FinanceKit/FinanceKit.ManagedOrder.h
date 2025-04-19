@class NSDate, NSString, _TtC10FinanceKit16ManagedOrderType, _TtC10FinanceKit24ManagedOrderRegistration, _TtC10FinanceKit22ManagedOrderWebService, _TtC10FinanceKit17ManagedOrderMonth, _TtC10FinanceKit28ManagedECommerceOrderContent, NSNumber;

@interface FinanceKit.ManagedOrder : NSManagedObject {
    void /* unknown type, empty encoding */ orderContentTypeKey;
}

@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic) long long updateSequenceNumber;
@property (nonatomic) long long fetchSequenceNumber;
@property (nonatomic, copy) NSString *lastModifiedValue;
@property (nonatomic) long long requestAttemptCount;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, retain) _TtC10FinanceKit24ManagedOrderRegistration *orderRegistration;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;
@property (nonatomic, retain) _TtC10FinanceKit28ManagedECommerceOrderContent *ecommerceOrderContent;
@property (nonatomic, retain) NSNumber *primitiveOrderContentType;
@property (nonatomic, copy) NSDate *orderContentModificationDate;
@property (nonatomic) short orderContentDecodingVersion;
@property (nonatomic) BOOL automaticUpdatesEnabled;
@property (nonatomic, copy) NSDate *automaticUpdatesEnabledModificationDate;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic, copy) NSDate *notificationsEnabledModificationDate;
@property (nonatomic) BOOL effectiveNotificationsEnabled;
@property (nonatomic) BOOL isMarkedAsComplete;
@property (nonatomic, copy) NSDate *isMarkedAsCompleteModificationDate;
@property (nonatomic) BOOL effectiveAutomaticUpdatesEnabled;
@property (nonatomic, copy) NSString *applePayTransactionIdentifier;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *archiveDate;
@property (nonatomic, copy) NSDate *showsAsActiveUntilDate;
@property (nonatomic, copy) NSDate *automaticUpdatesEnabledUntilDate;
@property (nonatomic, retain) _TtC10FinanceKit17ManagedOrderMonth *orderMonth;
@property (nonatomic) BOOL showsAsActive;
@property (nonatomic) BOOL isActive;
@property (nonatomic) short statusPriorityValue;
@property (nonatomic, copy) NSDate *orderContentUpdatedDate;
@property (nonatomic, copy) NSDate *priorityEstimatedCompletionDate;

- (void).cxx_destruct;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)awakeFromInsert;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)willSave;

@end
