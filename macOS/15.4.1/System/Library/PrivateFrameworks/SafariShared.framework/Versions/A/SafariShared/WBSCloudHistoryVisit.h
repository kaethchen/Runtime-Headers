@class NSString, NSDictionary, WBSHistoryVisitIdentifier;

@interface WBSCloudHistoryVisit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *visitIdentifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=loadWasSuccessful) BOOL loadSuccessful;
@property (nonatomic, getter=wasHTTPNonGet) BOOL httpNonGet;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *redirectSourceVisitIdentifier;
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectSourceVisit;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *redirectDestinationVisitIdentifier;
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectDestinationVisit;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithHistoryVisit:(id)a0;
- (id)initWithVisitIdentifier:(id)a0 title:(id)a1 loadSuccessful:(BOOL)a2 httpNonGet:(BOOL)a3 redirectSourceVisitIdentifier:(id)a4 redirectDestinationVisitIdentifier:(id)a5;

@end
