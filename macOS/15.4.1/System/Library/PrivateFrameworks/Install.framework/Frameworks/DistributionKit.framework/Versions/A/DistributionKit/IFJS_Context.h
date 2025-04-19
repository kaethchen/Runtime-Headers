@class IFDTarget, NSString, IFDCustomizationItem, PKDistributionController, NSMutableDictionary, NSDictionary, PKDistributionChoiceItem, IFDocument, IFSearchContext, PKDistributionHelperController;

@interface IFJS_Context : NSObject {
    struct __CFBundle { } *currentBundle;
}

@property (weak) PKDistributionController *distributionController;
@property (weak) PKDistributionChoiceItem *choiceItem;
@property (retain) NSMutableDictionary *result;
@property (retain) NSString *destinationPath;
@property BOOL allowInsecure;
@property (retain) NSDictionary *systemVersionToBeInstalled;
@property (retain) NSDictionary *evaluatorMetaInfo;
@property BOOL legacySystemVersion;
@property IFDCustomizationItem *currentChoice;
@property id choicesDelegate;
@property IFDTarget *target;
@property BOOL targetContentIgnored;
@property IFDocument *document;
@property struct __CFBundle { } *currentBundle;
@property (retain) NSString *distributionScriptsPath;
@property IFSearchContext *searchContext;
@property (retain) PKDistributionHelperController *helperController;

- (void)dealloc;
- (id)init;

@end
