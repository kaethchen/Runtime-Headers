@class NSString, PKDistributionController, PKDistributionChoice, PKDistribution;

@interface OSSUUpdate : NSObject

@property (retain, nonatomic) PKDistribution *_distribution;
@property (retain, nonatomic) PKDistributionController *_distributionController;
@property (retain, nonatomic) PKDistributionChoice *_choice;
@property (retain, nonatomic) NSString *_baseDisplayName;
@property (retain, nonatomic) NSString *_displayName;
@property (retain, nonatomic) NSString *_displayVersion;
@property (retain, nonatomic) NSString *_longDescription;
@property (readonly, nonatomic) NSString *productKey;

- (void).cxx_destruct;
- (id)initWithProductKey:(id)a0 withDistribution:(id)a1 withDistributionController:(id)a2;
- (id)_attributedStringToHTMLString:(id)a0;
- (id)_descriptionDataReturningMIMEType:(id *)a0;
- (void)insertIntoJournal;
- (id)journalEntry;
- (void)setTargetJournalPath:(id)a0;

@end
