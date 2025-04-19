@class NSString, ABPeoplePickerScope;

@interface ABPeoplePickerGroupHelperFactory : NSObject <ABGroupHelperFactory> {
    ABPeoplePickerScope *_pickerScope;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)makeDragHelper:(id)a0;
- (id)makeCopyHelper:(id)a0;
- (id)makeDropHelper:(id)a0;
- (id)initWithPickerScope:(id)a0;
- (id)makeBrowsingSelectHelper:(id)a0;
- (id)makeCreateHelper:(id)a0;
- (id)makeCreateSmartGroupFromSearchHelper;
- (id)makeCreateSmartGroupHelper;
- (id)makeCutHelper:(id)a0;
- (id)makeDeleteHelper:(id)a0;
- (id)makeEditSmartGroupHelper:(id)a0;
- (id)makeImportFilesHelper:(id)a0 showImportConfirmation:(BOOL)a1;
- (id)makePasteHelper:(id)a0;
- (id)makeRenameHelper:(id)a0;
- (id)makeSearchingSelectHelper:(id)a0;
- (id)makeSectionSelectHelperWithIdentifier:(id)a0;

@end
