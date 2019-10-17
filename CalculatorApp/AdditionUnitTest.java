

import static org.junit.Assert.*;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

public class AdditionUnitTest
{
    /**
     * Default constructor for test class CalculationUnitTest
     */
    public AdditionUnitTest()
    {
    }

    /**
     * Sets up the test fixture.
     *
     * Called before every test case method.
     */
    @Before
    public void setUp()
    {
    }

    /**
     * Tears down the test fixture.
     *
     * Called after every test case method.
     */
    @After
    public void tearDown()
    {
    }

    @Test
    public void ZeroInputs()
    {
        CalculationUnit testy = new CalculationUnit();
        
        assertEquals(0.0, testy.Calculate(0.0, 0.0), 0.000005);//expected, actual, delta
    }

    @Test
    public void PositiveInputs()
    {
        CalculationUnit testy = new AdditionUnit();
        
        assertEquals(132.9, testy.Calculate(34.2, 98.7), 0.000005);//expected, actual, delta
    }

    @Test
    public void NegitiveInputs()
    {
        CalculationUnit testy = new AdditionUnit();
        
        assertEquals(-140.0, testy.Calculate(-60.0, -80.0), 0.000005);//expected, actual, delta
    }

    @Test
    public void NegitivePositiveInputs()
    {
        CalculationUnit testy = new AdditionUnit();
        
        assertEquals( 439.3, testy.Calculate(-56.9, 496.2), 0.000005);//expected, actual, delta
    }   

    @Test
    public void PositiveNegitiveInputs()
    {
        CalculationUnit testy = new AdditionUnit();
        
        assertEquals( -90002.213, testy.Calculate(0.987, -90003.2), 0.000005);//expected, actual, delta
    }   
}