@class NSString, CNContactListValueHelperScope;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactListSelectValueHelper : NSObject <CNContactListSelectHelper> {
    id<CNContactPickerInternalResponseDelegate> _delegate;
    CNContactListValueHelperScope *_scope;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
