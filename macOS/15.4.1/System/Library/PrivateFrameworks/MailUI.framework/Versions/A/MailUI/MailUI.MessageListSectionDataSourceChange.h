@class NSString;

@interface MailUI.MessageListSectionDataSourceChange : NSObject <EFPubliclyDescribable> {
    void /* unknown type, empty encoding */ change;
}

@property (nonatomic, readonly) NSString *ef_publicDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) BOOL isAddition;
@property (nonatomic, readonly) BOOL isRemoval;
@property (nonatomic, readonly) BOOL isMove;
@property (nonatomic, readonly) BOOL isUpdate;
@property (nonatomic, readonly) BOOL skipped;
@property (nonatomic, readonly) BOOL failed;
@property (nonatomic, readonly) BOOL isFirstChange;
@property (nonatomic, readonly) BOOL isSectionRemoval;
@property (nonatomic, readonly) BOOL isCleanSnapshot;
@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic, readonly) long long numberOfChanges;

+ (id)failed;
+ (id)removed:(long long)a0;
+ (id)updated:(long long)a0;
+ (id)skipped;
+ (id)added:(long long)a0 isFirstChange:(BOOL)a1;
+ (id)cleanSnapshot;
+ (id)moved:(long long)a0;
+ (id)sectionRemovedWithSection:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
