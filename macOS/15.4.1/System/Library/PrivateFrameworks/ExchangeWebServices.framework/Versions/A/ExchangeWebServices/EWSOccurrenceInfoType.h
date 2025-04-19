@class NSString, NSDateComponents, EWSItemIdType;

@interface EWSOccurrenceInfoType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSItemIdType *ItemId;
@property (retain, nonatomic) NSDateComponents *Start;
@property (retain, nonatomic) NSDateComponents *End;
@property (retain, nonatomic) NSDateComponents *OriginalStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
