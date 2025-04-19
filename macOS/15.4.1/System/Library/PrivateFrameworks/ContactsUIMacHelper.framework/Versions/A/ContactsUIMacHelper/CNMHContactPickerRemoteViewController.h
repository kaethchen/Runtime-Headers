@class NSString, NSXPCConnection;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNMHContactPickerRemoteViewController : NSRemoteViewController <CNContactPickerViewController, CNContactPickerInternalSetup, CNContactPickerInternalResponseDelegate> {
    NSXPCConnection *_connection;
}

@property (weak) id<CNContactPickerInternalResponseDelegate> responseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)internalResponseDelegateInterface;

- (void).cxx_destruct;
- (void)establishConnection;
- (void)addSection:(id)a0;
- (void)pickerDidCreate;
- (void)didSearchForString:(id)a0;
- (void)didSelectContact:(id)a0 key:(id)a1 value:(id)a2 identifier:(id)a3;
- (void)didShowSectionWithIdentifier:(id)a0;
- (id)pickerControlProxy;
- (void)registerSectionsForDraggedTypes:(id)a0;
- (void)resetUsageStatistics;
- (void)setDisplayedKeys:(id)a0;
- (void)setSearchFieldVisible:(BOOL)a0;
- (void)showSectionWithIdentifier:(id)a0;
- (void)traceUsageStatistics;
- (void)establishConnectionWithCompletionBlock:(id /* block */)a0;

@end
