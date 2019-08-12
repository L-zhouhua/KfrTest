#include "KfrTest.h"
#include <kfr/io.hpp>

using namespace kfr;
using namespace std;						
KfrTest::KfrTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	audio_reader_wav<float> reader(open_file_for_reading("C:\\Users\\94838\\Desktop\\c++ku\\Alarm01.wav"));
	println("Sample Rate  = ", reader.format().samplerate);
	println("Channels     = ", reader.format().channels);
	println("Length       = ", reader.format().length);
	println("Duration (s) = ", reader.format().length / reader.format().samplerate);
	println("Bit depth    = ", audio_sample_bit_depth(reader.format().type));
	univector2d<float> audio1 = reader.read_channels();
	for (int i = 0; i < audio1.size(); i++)
	{
		
		print(audio1[i]);
		if (i % 10 == 0)
			println();
	}
}

void KfrTest::setupPlot()
{
	
}
