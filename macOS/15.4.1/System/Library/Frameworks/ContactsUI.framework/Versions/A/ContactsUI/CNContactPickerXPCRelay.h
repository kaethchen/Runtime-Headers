@class NSString, NSXPCConnection;
@protocol CNContactPickerInternalSetup;

@interface CNContactPickerXPCRelay : NSObject <CNContactPickerInternalResponseDelegate, CNContactPickerInternalSetup>

@property (retain) id<CNContactPickerInternalSetup> setupController;
@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addSection:(id)a0;
- (void)didSearchForString:(id)a0;
- (void)didSelectContact:(id)a0 key:(id)a1 value:(id)a2 identifier:(id)a3;
- (void)didShowSectionWithIdentifier:(id)a0;
- (void)registerSectionsForDraggedTypes:(id)a0;
- (void)resetUsageStatistics;
- (id)responseDelegate;
- (void)setAllowsNamePicking:(BOOL)a0;
- (void)setDisplayedKeys:(id)a0;
- (void)setResponseDelegate:(id)a0;
- (void)setSearchFieldVisible:(BOOL)a0;
- (void)showSectionWithIdentifier:(id)a0;
- (void)traceUsageStatistics;

@end
