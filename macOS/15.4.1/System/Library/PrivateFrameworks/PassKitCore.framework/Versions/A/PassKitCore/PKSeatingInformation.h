@class NSArray, PKSeat;

@interface PKSeatingInformation : NSObject

@property (readonly, nonatomic) NSArray *allSeats;
@property (readonly, nonatomic) PKSeat *firstSeat;

- (id)init;
- (void).cxx_destruct;
- (id)_allAisles;
- (id)_allLevels;
- (id)_allRows;
- (id)_allSectionColors;
- (id)_allSections;
- (id)changeMessageFromInformation:(id)a0;
- (id)displayableAllAislesString;
- (id)displayableAllLevelsString;
- (id)displayableAllRowsString;
- (id)displayableAllSeatsString;
- (id)displayableAllSectionsColor;
- (id)displayableAllSectionsString;
- (id)firstSeatContainingAttributes:(unsigned long long)a0;
- (id)initFromSemantic:(id)a0;
- (id)initFromSemantics:(id)a0;
- (id)seatsContainingAttributes:(unsigned long long)a0;
- (BOOL)seatsSpanMultipleSections;

@end
