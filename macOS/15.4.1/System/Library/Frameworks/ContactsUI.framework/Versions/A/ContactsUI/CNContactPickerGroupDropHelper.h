@class NSString, CNContactPickerView;
@protocol NSDraggingInfo;

@interface CNContactPickerGroupDropHelper : NSObject <ABGroupDropHelper> {
    id<NSDraggingInfo> _draggingInfo;
    CNContactPickerView *_pickerView;
    NSString *_selectedEntryIdentifier;
    NSString *_destinationEntryIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setCompletionBlock:(id /* block */)a0;
- (BOOL)acceptDrop;
- (BOOL)acceptDropWithIgnoresGuardianRestrictions:(BOOL)a0;
- (id)initWithDraggingInfo:(id)a0 pickerView:(id)a1 selectedEntryIdentifier:(id)a2 destinationEntryIdentifier:(id)a3;
- (unsigned long long)validateDrop;

@end
