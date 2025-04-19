@class NSIndexSet, NSCountedSet;

@interface VNPersonsModelFaceModelDataSummarization : NSObject {
    NSCountedSet *_personFaceObservationsCountHistogram;
}

@property (readonly) unsigned long long personsCount;
@property (readonly, copy) NSIndexSet *faceObservationCountsDistribution;

+ (id)summarizationOfDataFromProvider:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPersonsCount:(unsigned long long)a0 faceObservationCountsDistribution:(id)a1 personFaceObservationsCountHistogram:(id)a2;
- (unsigned long long)numberOfPersonsWithFaceObservationsCount:(unsigned long long)a0;

@end
