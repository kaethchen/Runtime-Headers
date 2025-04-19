@class NSString, NSArray;

@interface AMType : NSObject

@property (copy) NSString *name;
@property (copy) NSArray *utiTypes;
@property (copy) NSString *fileType;
@property (copy) NSString *textContent;
@property (copy) NSString *detectedDataType;
@property (copy) NSString *category;
@property (copy) NSString *automatorTypeID;
@property (copy) NSArray *applicationBundleIDs;
@property (copy) NSArray *headerInputTypes;
@property (readonly, nonatomic) NSString *headerInputType;
@property (readonly, nonatomic) BOOL isCustomApplicationType;

+ (BOOL)headerInputTypes:(id)a0 haveConnectionToActionInputTypes:(id)a1 conservativeConversionOnly:(BOOL)a2 returningLength:(unsigned long long *)a3;

- (id)description;
- (void).cxx_destruct;
- (void)addApplicationBundleID:(id)a0;
- (id)initWithApplicationBundleID:(id)a0 customUTI:(id)a1;
- (id)initWithName:(id)a0 utiTypes:(id)a1 fileType:(id)a2 automatorTypeID:(id)a3 textContent:(id)a4 detectedDataType:(id)a5 headerInputTypes:(id)a6 category:(id)a7;

@end
