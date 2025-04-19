@class NSString, NSArray, EWSTaskRecurrenceType, NSDateComponents;

@interface EWSTaskType : EWSItemType

@property (nonatomic) long long ActualWork;
@property (nonatomic) BOOL ActualWorkSpecified;
@property (retain, nonatomic) NSDateComponents *AssignedTime;
@property (copy, nonatomic) NSString *BillingInformation;
@property (nonatomic) long long ChangeCount;
@property (nonatomic) BOOL ChangeCountSpecified;
@property (copy, nonatomic) NSArray *Companies;
@property (retain, nonatomic) NSDateComponents *CompleteDate;
@property (copy, nonatomic) NSArray *Contacts;
@property (nonatomic) long long DelegationState;
@property (copy, nonatomic) NSString *Delegator;
@property (retain, nonatomic) NSDateComponents *DueDate;
@property (nonatomic) long long IsAssignmentEditable;
@property (nonatomic) BOOL IsAssignmentEditableSpecified;
@property (nonatomic) BOOL IsComplete;
@property (nonatomic) BOOL IsCompleteSpecified;
@property (nonatomic) BOOL IsRecurring;
@property (nonatomic) BOOL IsRecurringSpecified;
@property (nonatomic) BOOL IsTeamTask;
@property (nonatomic) BOOL IsTeamTaskSpecified;
@property (copy, nonatomic) NSString *Mileage;
@property (copy, nonatomic) NSString *Owner;
@property (nonatomic) double PercentComplete;
@property (nonatomic) BOOL PercentCompleteSpecified;
@property (retain, nonatomic) EWSTaskRecurrenceType *Recurrence;
@property (retain, nonatomic) NSDateComponents *StartDate;
@property (nonatomic) long long Status;
@property (copy, nonatomic) NSString *StatusDescription;
@property (nonatomic) long long TotalWork;
@property (nonatomic) BOOL TotalWorkSpecified;

+ (id)definition;

- (void).cxx_destruct;

@end
