@class NSString, _CPCounterfactualInfo, NSData;

@interface _CPExperimentTriggeredFeedback : PBCodable <_CPProcessableFeedback, _CPExperimentTriggeredFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long queryID;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPCounterfactualInfo *counterfactual;
@property (copy, nonatomic) NSString *codepathId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
